int test_func(void) {
    int v0 = 74;
    int v1 = 20;
    int v2 = 40;
    int v3 = 80;
    int v4 = 87;
    int i;
    v3 = v3 + v3;
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
