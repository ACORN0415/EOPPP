int test_func(void) {
    int v0 = 58;
    int v1 = 32;
    int v2 = 13;
    int v3 = 51;
    int v4 = 33;
    int i;
    v2 = 22;
    v1 = v1 + v2;
    v2 = v2 & v3;
    return v0;
}
int main(void) { return test_func(); }
