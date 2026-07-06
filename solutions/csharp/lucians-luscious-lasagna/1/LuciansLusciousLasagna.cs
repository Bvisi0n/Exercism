class Lasagna
{
    public int ExpectedMinutesInOven() => 40;

    public int RemainingMinutesInOven(int timeSpentInOven)
    {
        int result = 40 - timeSpentInOven;
        if (result < 0)
        {
            return 0;
        }
        return result;
    }

    public int PreparationTimeInMinutes(int layerCount)
    {
        if (layerCount < 0)
        {
            return 0;
        }
        return layerCount * 2;
    }

    public int ElapsedTimeInMinutes(int layerCount, int timeSpentInOven)
    {
        int result = PreparationTimeInMinutes(layerCount) + timeSpentInOven;
        if (result < 0)
        {
            return 0;
        }
        return result;
    }
}
