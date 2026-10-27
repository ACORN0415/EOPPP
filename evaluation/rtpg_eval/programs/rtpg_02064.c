int test_func(void) {
    int v0 = 71;
    int v1 = 22;
    int v2 = 82;
    int i;
    v1 = v1 + v2;
    v0 = v0 | v1;
    return v0;
}
int main(void) { return test_func(); }
