*This project has been created as part of the 42 curriculum by aouassar.*

# Push_swap

## Description

Push_swap is a sorting algorithm project where you must sort a stack of integers using a limited set of operations, aiming for the minimum number of moves. The challenge lies in finding the most efficient algorithm to sort data under strict constraints.

### Available Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap first 2 elements of stack a |
| `sb` | Swap first 2 elements of stack b |
| `ss` | `sa` and `sb` simultaneously |
| `pa` | Push top of b onto a |
| `pb` | Push top of a onto b |
| `ra` | Rotate a (first becomes last) |
| `rb` | Rotate b (first becomes last) |
| `rr` | `ra` and `rb` simultaneously |
| `rra` | Reverse rotate a (last becomes first) |
| `rrb` | Reverse rotate b (last becomes first) |
| `rrr` | `rra` and `rrb` simultaneously |

## Instructions

### Compilation

```bash
make        # Compile push_swap
make bonus  # Compile checker (bonus)
make clean  # Remove object files
make fclean # Remove all generated files
make re     # Recompile everything
```

### Usage

```bash
./push_swap 3 2 1
./push_swap "3 2 1"
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

### Error Handling

The program displays "Error" on stderr for:
- Non-integer arguments
- Duplicate values
- Values exceeding INT_MAX/INT_MIN

## Resources

### Classic References
- [Sorting Algorithm Visualizer](https://visualgo.net/en/sorting)
- [Big O Notation Explained](https://www.bigocheatsheet.com/)
- [Stack Data Structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))

### AI Usage
- AI was used to help structure the initial project setup
- All algorithm implementations should be understood and explained during defense
- Code was reviewed and tested manually

## Benchmarks

| Stack Size | Target Operations |
|------------|-------------------|
| 3 | ≤ 3 |
| 5 | ≤ 12 |
| 100 | < 700 |
| 500 | < 5500 |