package fuml.generator.services;

public class ExecutionMode 
{
	private enum ExecutionModeKind
	{
		NONE,
		FUML,
		PSCS
	}
	
	private ExecutionModeKind m_executionModeKind = ExecutionModeKind.PSCS;
	
	public boolean isExecutable()
	{
		return (m_executionModeKind != ExecutionModeKind.NONE);
	}
	
	public boolean isFUMLExecutable()
	{
		return isExecutable();
	}
	
	public boolean isPSCSExecutable()
	{
		return	(
					(m_executionModeKind == ExecutionModeKind.PSCS)
				);
	}
	
	public void setIsNoneExecutable()
	{
		m_executionModeKind = ExecutionModeKind.NONE;
	}
	
	public void setIsFUMLExecutable()
	{
		m_executionModeKind = ExecutionModeKind.FUML;
	}
	
	public void setIsPSCSExecutable()
	{
		m_executionModeKind = ExecutionModeKind.PSCS;
	}
}
