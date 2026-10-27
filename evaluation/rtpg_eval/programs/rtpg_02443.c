int test_func(void) {
    int v0 = 1;
    int v1 = 60;
    int v2 = 73;
    int v3 = 56;
    int v4 = 97;
    int i;
    v4 = v4 * 3;
    v1 = v1 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
