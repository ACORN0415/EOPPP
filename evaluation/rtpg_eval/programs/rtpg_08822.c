int test_func(void) {
    int v0 = 45;
    int v1 = 62;
    int v2 = 7;
    int v3 = 75;
    int i;
    v1 = v1 + v1;
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
