int test_func(void) {
    int v0 = 5;
    int v1 = 56;
    int v2 = 54;
    int v3 = 95;
    int i;
    v1 = v1 + v3;
    v2 = v2 - v3;
    return v0;
}
int main(void) { return test_func(); }
