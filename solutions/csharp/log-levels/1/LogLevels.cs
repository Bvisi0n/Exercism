static class LogLine
{
    public static string Message(string logLine)
    {
        var position = logLine.IndexOf(":") + 1;
        string result = logLine.Substring(position);
        return result.Trim();
    }

    public static string LogLevel(string logLine)
    {
        var begin = logLine.IndexOf("[") + 1;
        var end = logLine.IndexOf("]") - 1;
        string result = logLine.Substring(begin, end);
        return result.ToLower();
    }

    public static string Reformat(string logLine)
    {
        return Message(logLine) + " (" + LogLevel(logLine) + ")";
    }
}
