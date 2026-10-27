int test_func(void) {
    int v0 = 44;
    int v1 = 46;
    int v2 = 24;
    int v3 = 65;
    int i;
    v0 = v0 - v3;
    v2 = v2 + v2;
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
