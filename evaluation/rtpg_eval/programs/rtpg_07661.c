int test_func(void) {
    int v0 = 39;
    int v1 = 45;
    int v2 = 46;
    int i;
    v0 = v0 + v1;
    v1 = v1 * 10;
    v0 = 13;
    return v0;
}
int main(void) { return test_func(); }
