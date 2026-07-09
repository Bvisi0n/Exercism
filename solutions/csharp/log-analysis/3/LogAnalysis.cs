public static class LogAnalysis 
{
    public static string SubstringAfter(this string str, string delimiter)
        => str.Substring(str.IndexOf(delimiter) + delimiter.Length);

    public static string SubstringBetween(this string str, string delimiterBegin, string delimiterEnd)
    {
        int charCountBefore = str.IndexOf(delimiterBegin) + delimiterBegin.Length;
        int charCountAfter = str.Length - str.IndexOf(delimiterEnd);
        int substringLength = str.Length - charCountBefore - charCountAfter;
        return str.Substring(charCountBefore, substringLength);
    }
    
    public static string Message(this string str)
    {
        string result = str.SubstringAfter(":");
        return result.Trim();
    }

    public static string LogLevel(this string str)
    {
        string result = str.SubstringBetween("[", "]");
        return result.Trim();
    }
}