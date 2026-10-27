int test_func(void) {
    int v0 = 100;
    int v1 = 56;
    int v2 = 65;
    int v3 = 5;
    int v4 = 48;
    int i;
    v2 = 28;
    v3 = v3 + v3;
    return v0;
}
int main(void) { return test_func(); }
