[[nodiscard]] constexpr bool can_eat_ghost( const bool power_pellet_active, const bool touching_ghost ) noexcept
{
    return power_pellet_active && touching_ghost;
}

[[nodiscard]] constexpr bool scored( const bool touching_power_pellet, const bool touching_dot ) noexcept
{
    return touching_power_pellet || touching_dot;
}

[[nodiscard]] constexpr bool lost( const bool power_pellet_active, const bool touching_ghost ) noexcept
{
    return !power_pellet_active && touching_ghost;
}

[[nodiscard]] constexpr bool won( const bool has_eaten_all_dots, const bool power_pellet_active, const bool touching_ghost ) noexcept
{
    return has_eaten_all_dots && !lost(power_pellet_active, touching_ghost);
}
