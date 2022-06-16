| structure     | access | insert at the end | insert in the middle | insert | search |
|---------------|--------|-------------------|----------------------|--------|--------|
| array         | O(1)   | ---               | ---                  | ---    | ---    |
| vector        | O(1)   | ~O(1)             | O(N)                 | ---    | ---    |
| list          | O(N)   | O(1)              | O(1)                 | ---    | ---    |
| queue         | O(1)   | O(1)              | ---                  | ---    | ---    |
| stack         | O(1)   | O(1)              | ---                  | ---    | ---    |
| deque         | O(1)   | ~O(1)             | O(N)                 | ---    | ---    |
| set           | log(n) | ---               | ---                  | log(n) | log(n) |
| map           | log(n) | ---               | ---                  | log(n) | log(n) |
| unordered_map | O(1)   | ---               | ---                  | ~O(1)  | ~O(1)  |
