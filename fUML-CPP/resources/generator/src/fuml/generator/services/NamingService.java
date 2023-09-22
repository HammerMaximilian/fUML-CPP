package fuml.generator.services;

import org.eclipse.uml2.uml.Element;
import org.eclipse.uml2.uml.NamedElement;

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
					+ namedElement.getName() : element.eClass().getName() + String.valueOf(internalElementCount++));
		}
		else
		{
			name = element.eClass().getName() + String.valueOf(internalElementCount++);
		}
		
		return name;
	}
	
	public void setUseExtendedNamingConvention(boolean _useExtendedNamingConvention)
	{
		useExtendedNamingConvention = _useExtendedNamingConvention;
	}
}
