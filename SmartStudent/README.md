# Smart Student

Practice project to understand smart pointers in C++.

## What it does
- Creates a student with `unique_ptr` and transfers ownership via `std::move`
- Demonstrates that `unique_ptr` is empty after move
- Creates a student with `shared_ptr` and shares ownership between multiple pointers
- Tracks reference count with `use_count()`
- Demonstrates how `reset()` releases ownership

## Concepts covered
- `unique_ptr` — single ownership
- `shared_ptr` — shared ownership
- `std::move` — transferring ownership
- `use_count()` — reference counting
- `reset()` — releasing ownership
- RAII — automatic memory management