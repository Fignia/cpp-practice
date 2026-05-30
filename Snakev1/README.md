# Snake v1 - Body Simulator

Practice project to understand `std::deque` in C++.

## What it does
- Simulates snake movement in console using coordinates
- Move with W A S D keys
- Snake grows when it reaches food at {5,5}
- Press Esc to exit

## Concepts covered
- `std::deque` — double-ended queue
- `push_front` / `pop_back` — snake movement logic
- `std::pair` — storing coordinates
- `_kbhit()` / `_getch()` — non-blocking keyboard input
- Structs and functions separation