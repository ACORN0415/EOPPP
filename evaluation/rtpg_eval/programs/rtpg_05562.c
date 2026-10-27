int test_func(void) {
    int v0 = 88;
    int v1 = 66;
    int v2 = 13;
    int v3 = 100;
    int i;
    v0 = v0 - v1;
    v3 = v3 + v0;
    return v0;
}
int main(void) { return test_func(); }
