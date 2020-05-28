# c-experiments
Learning C - collection of problems and experiments.

### Dispatch map - function pointers

Implement something like this:
```
binary_op_dispatch_map = {
    "+": lambda x, y: x + y,
    "*": lambda x, y: x * y
}
assert binary_op_dispatch_map["+"](1, 2) == 3
```
in C. This means working around the fact functions are **not** first-class citizens in C. I guess that's
where function pointers come into play.

#### Potential TODO
Implement said solution using `enum`, like this:
```
from enum import Enum

class BinaryOPDispatchMap(Enum):
    PLUS = lambda x, y: x + y
    STAR = lambda x, y: x * y

assert BinaryOPDispatchMap.STAR(2,3) == 6
```

------------------------------------------------------------
### TODO overall
* figure out how to write tests in C
