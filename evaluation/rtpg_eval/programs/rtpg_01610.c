int test_func(void) {
    int v0 = 20;
    int v1 = 25;
    int v2 = 69;
    int v3 = 31;
    int i;
    v0 = v0 - v1;
    v2 = 2;
    v0 = v0 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
