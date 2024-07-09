package fuml.generator.services;

import org.eclipse.uml2.uml.Element;
import org.eclipse.uml2.uml.NamedElement;
import org.eclipse.uml2.uml.Operation;
import org.eclipse.uml2.uml.Parameter;
import org.eclipse.uml2.uml.ParameterDirectionKind;

public class NamingService 
{

	private static int internalElementCount = 0;
	private static boolean useExtendedNamingConvention = false;
	
	/*public String getFullName(Element element)
	{
		String fullName = "";
		
		fullName = ((element.getOwner() != null) ? this.getFullName(element.getOwner()) + "_" : "")
					+ this.getName(element);
		
		return fullName;
	}*/
	
	public String getName(Element element)
	{
		String name = "";
		
		if(element instanceof NamedElement)
		{
			NamedElement namedElement = (NamedElement)element;
			
			name = ((namedElement.getName() != null && !(namedElement.getName().isBlank())) ? 
					((useExtendedNamingConvention) ? element.eClass().getName() + "_" : "")
					+ getSpecializedName(namedElement) : element.eClass().getName() + String.valueOf(internalElementCount++));
		}
		else
		{
			name = element.eClass().getName() + String.valueOf(internalElementCount++);
		}
		
		return name;
	}
	
	public String getRealName(Element element)
	{
		String realName = "";
		
		if(element instanceof Operation)
		{
			Operation operation = (Operation)element;
			
			realName = ((operation.getName() != null && !(operation.getName().isBlank())) ? 
					((useExtendedNamingConvention) ? element.eClass().getName() + "_" : "")
					+ operation.getName() : element.eClass().getName() + String.valueOf(internalElementCount++));
		}
		else
		{
			realName = getName(element);
		}
		
		return realName;
	}
	
	public void setUseExtendedNamingConvention(boolean _useExtendedNamingConvention)
	{
		useExtendedNamingConvention = _useExtendedNamingConvention;
	}
	
	private String getSpecializedName(NamedElement namedElement)
	{
		switch(namedElement.eClass().getClassifierID())
		{
			case org.eclipse.uml2.uml.UMLPackage.OPERATION:
			{
				return getOperationName((Operation) namedElement);
			}
			default:
			{ 
				return namedElement.getName();
			}
		}
	}
	
	private String getOperationName(Operation operation)
	{
		String operationName = ((operation.getType() != null) ? operation.getType().getName() + "_" : "")
								+ operation.getName();
		
		for(int i = 0; i < operation.getOwnedParameters().size(); i++)
		{
			Parameter parameter = operation.getOwnedParameters().get(i);
			
			if(parameter.getDirection() != ParameterDirectionKind.RETURN_LITERAL)
			{
				operationName += "_" + ((parameter.getType() != null) ? parameter.getType().getName() : "untyped") 
								+ ((parameter.getUpper() != 1) ? "Array" : "");
			}
		}
		
		return operationName;
	}
}
