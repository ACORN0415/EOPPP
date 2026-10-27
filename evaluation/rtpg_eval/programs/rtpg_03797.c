int test_func(void) {
    int v0 = 12;
    int v1 = 54;
    int v2 = 80;
    int v3 = 91;
    int v4 = 3;
    int i;
    v2 = v2 - v3;
    v0 = v0 + v3;
    return v0;
}
int main(void) { return test_func(); }
