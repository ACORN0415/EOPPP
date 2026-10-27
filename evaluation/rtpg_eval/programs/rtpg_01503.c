int test_func(void) {
    int v0 = 73;
    int v1 = 60;
    int v2 = 70;
    int v3 = 3;
    int i;
    v0 = v0 * 2;
    v2 = v2 & v3;
    return v0;
}
int main(void) { return test_func(); }
