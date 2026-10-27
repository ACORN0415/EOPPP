int test_func(void) {
    int v0 = 29;
    int v1 = 75;
    int v2 = 29;
    int i;
    v1 = v1 - v2;
    v1 = 99;
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }
