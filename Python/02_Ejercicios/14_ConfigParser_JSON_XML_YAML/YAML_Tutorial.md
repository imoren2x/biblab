YAML
======

Table of Contents

1. Elements
    1. Lists
    2. Associative arrays
    3. Combinations
    4. Relational trees
    5. Data types
2. Hierarchy -> indentation + justification
_______________________

Link: [PyYAML](http://pyyaml.org/wiki/PyYAMLDocumentation)

1. Elements
------
### Lists
 Using dashes:
```yaml
    ---#Favorite movies
    - Casablanca
    - North by the Northwest
    - The man that wasn't there
```
 Using square brackets:
```yaml
    ---#shopping list
    [milk, pumpkin pie, meat]
```

2. Associative arrays (register, struct)
 Using colon + space:
```yaml
 ---#Name, age; key: value
    name: John Smith
    age: 33
```

 Using inline blocks:
```yaml
 ---#Inline blocks:
 {name: John Smith, age: 33}
```

3. Combinations
 Lists of registers
```yaml
 - {name: John Smith, age: 33}
 -
    name: Mary Smith
    age: 37
```

 Register of lists:
```yaml
    man: [John Smith, Bill Jones]
    woman:
        - Mary Smith
        - Susan Williams
```

4. Relational trees
    & Identifier
    * Reference
    << Associative Array merges

```yaml
 ---#relational trees
  - step: &id1
    instrument: lasik 20
  - step: <<: *id1
```
