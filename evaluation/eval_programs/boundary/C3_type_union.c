// BOUNDARY: composite type 'union'
union U { int i; float f; };
void test_func(void) {
    union U u; u.i = 32228;
    int x = 0, i;
    for (i = 0; i < 27; i++) { x = x + u.i; }
}
int main() { test_func(); return 0; }

