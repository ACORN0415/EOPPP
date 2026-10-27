// BOUNDARY: composite type 'struct'
struct S { int a; int b; };
void test_func(void) {
    struct S s; s.a = 51386; s.b = 2;
    int i;
    for (i = 0; i < 25; i++) { s.a = s.a + s.b; }
}
int main() { test_func(); return 0; }

