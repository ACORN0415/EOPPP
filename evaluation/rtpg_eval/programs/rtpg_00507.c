int test_func(void) {
    int v0 = 33;
    int v1 = 19;
    int v2 = 32;
    int v3 = 65;
    int v4 = 17;
    int i;
    v4 = 55;
    v2 = v2 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
