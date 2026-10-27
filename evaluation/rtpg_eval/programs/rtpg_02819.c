int test_func(void) {
    int v0 = 47;
    int v1 = 90;
    int v2 = 72;
    int v3 = 34;
    int v4 = 25;
    int i;
    v3 = v3 * 2;
    v3 = v3 & v4;
    return v0;
}
int main(void) { return test_func(); }
