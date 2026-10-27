int test_func(void) {
    int v0 = 53;
    int v1 = 67;
    int v2 = 44;
    int v3 = 45;
    int i;
    v3 = v3 + v0;
    v2 = 29;
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
