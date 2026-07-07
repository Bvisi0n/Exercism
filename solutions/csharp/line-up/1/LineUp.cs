public static class LineUp
{
    public static string Format(string name, int number)
    {
        if (number < 1 || number > 999)
        {
            throw new ArgumentException("Parameter must be an integer from 1 up to 999.", nameof(number));
        }

        string position;
        if (number % 10 == 1 && number % 100 != 11)
        {
            position = $"{number}st";
        }
        else if (number % 10 == 2 && number % 100 != 12)
        {
            position = $"{number}nd";
        }
        else if (number % 10 == 3 && number % 100 != 13)
        {
            position = $"{number}rd";
        }
        else
        {
            position = $"{number}th";
        }
        
        if ( string.IsNullOrWhiteSpace(name))
        {
            return $"You are the {position} customer we serve today. Thank you!";
        }
        
        return $"{name.Trim()}, you are the {position} customer we serve today. Thank you!";
    }
}
