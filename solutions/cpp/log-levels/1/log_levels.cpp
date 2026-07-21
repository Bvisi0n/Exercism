//#include <format> //C++20 not supported... :(
#include <string>

namespace log_line
{
    [[nodiscard]] std::string message( const std::string line )
    {
        size_t position{ line.find( ':' ) + 2 };
        return line.substr( position );
    }

    [[nodiscard]] std::string log_level( const std::string line )
    {
        size_t startPosition{ line.find( '[' ) + 1 };
        size_t endPosition{ line.find( ']' ) };
        size_t length{ endPosition - startPosition };
        return line.substr( startPosition, length );
    }

    [[nodiscard]] std::string reformat( const std::string line )
    {
        //return std::format( "{} ({})", message( line ), log_level( line ) );
        return message( line ) + " (" + log_level( line ) + ")";
    }
}
