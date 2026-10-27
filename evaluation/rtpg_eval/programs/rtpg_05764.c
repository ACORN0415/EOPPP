int test_func(void) {
    int v0 = 35;
    int v1 = 44;
    int v2 = 76;
    int v3 = 47;
    int v4 = 42;
    int i;
    v3 = v3 - v1;
    v2 = v2 + v3;
    return v0;
}
int main(void) { return test_func(); }
