#include <cassert>

int ovenTime() { return 40; }

int remainingOvenTime( const int actualMinutesInOven )
{
    assert( actualMinutesInOven >= 0 && "Must be zero or a positive whole number." );
    int result{ ovenTime() - actualMinutesInOven };
    return result < 0 ? 0 : result;
}

int preparationTime( const int numberOfLayers )
{
    assert( numberOfLayers > 0 && "Must be a positive whole number." );
    return numberOfLayers * 2;
}

int elapsedTime( const int numberOfLayers, const int actualMinutesInOven )
{
    assert( actualMinutesInOven >= 0 && "Must be zero or a positive whole number." );
    return preparationTime( numberOfLayers ) + actualMinutesInOven;
}
