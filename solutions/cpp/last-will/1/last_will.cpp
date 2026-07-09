// Secret knowledge of the Zhang family:
namespace zhang
{
    [[nodiscard]] constexpr int bank_number_part(const int secret_modifier) noexcept
    {
        int zhang_part{8'541};
        return (zhang_part * secret_modifier) % 10000;
    }
    
    namespace red
    {
        [[nodiscard]] constexpr int code_fragment() noexcept
        {
            return 512;
        }
    }
    
    namespace blue
    {
        [[nodiscard]] constexpr int code_fragment() noexcept
        {
            return 677;
        }
    }
}

// Secret knowledge of the Khan family:
namespace khan
{
    [[nodiscard]] constexpr int bank_number_part(const int secret_modifier) noexcept
    {
        int khan_part{4'142};
        return (khan_part * secret_modifier) % 10000;
    }
    
    namespace red
    {
        [[nodiscard]] constexpr int code_fragment() noexcept
        {
            return 148;
        }
    }
    
    namespace blue
    {
        [[nodiscard]] constexpr int code_fragment() noexcept
        {
            return 875;
        }
    }
}

// Secret knowledge of the Garcia family:
namespace garcia
{
    [[nodiscard]] constexpr int bank_number_part(const int secret_modifier) noexcept
    {
        int garcia_part{4'023};
        return (garcia_part * secret_modifier) % 10000;
    }
    
    namespace red
    {
        [[nodiscard]] constexpr int code_fragment() noexcept
        {
            return 118;
        }
    }
    
    namespace blue
    {
        [[nodiscard]] constexpr int code_fragment() noexcept
        {
            return 923;
        }
    }
}

namespace estate_executor
{
    [[nodiscard]] constexpr int assemble_account_number(const int secret_modifier) noexcept
    {
        return zhang::bank_number_part(secret_modifier)
            + khan::bank_number_part(secret_modifier)
            + garcia::bank_number_part(secret_modifier);
    }

    [[nodiscard]] constexpr int assemble_code() noexcept
    {
        int red
        {
            zhang::red::code_fragment()
            + khan::red::code_fragment()
            + garcia::red::code_fragment()
        };

        int blue
        {
            zhang::blue::code_fragment()
            + khan::blue::code_fragment()
            + garcia::blue::code_fragment()
        };

        return red * blue;
    }
}