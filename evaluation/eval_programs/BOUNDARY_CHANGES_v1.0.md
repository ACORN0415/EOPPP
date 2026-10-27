# Boundary test changes (v1.0)

v1.0 adds a generation-stage faithfulness check: a program is accepted only if the
generated MIF reproduces the C semantics under EOPPP's execution model (every core
reads the previous cycle's values; the op slot repeats every cycle; condition cores
are loop-exit branches). Eight "pass" boundary programs had loop bodies that the
v0 generator translated incorrectly. Their *tested feature* is kept; only the
incidental loop body was rewritten so that it is mappable. Originals are in
`eval_programs/boundary_v0/`.

| File | Tested feature (unchanged) | v0 body problem | v1.0 body |
|---|---|---|---|
| C3_cmp_lt/gt/le/ge/eq/ne.c | comparison operator `<,>,<=,>=,==,!=` | `if` inside the loop without exit (hardware has no conditional select; conditions are exit branches) | same operator used as a loop-exit condition (`if (x OP c) break;`) |
| C4_ctrl_for_if.c | for + if, not nested | same as above | `if` placed before the loop (folded at compile time) |
| C1_varcount_126.c | 126 declared variables | `v2 = v8 + v3` expands to `v8 + v20 + v18 + v8`: the same core twice cannot be expressed by a one-bit-per-source Y-mask | `v2 = v9 + v3` |

`if` inside the loop body (if-conversion) is a v2.0 item.
