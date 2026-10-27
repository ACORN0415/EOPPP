int test_func(void) {
    int v0 = 14;
    int v1 = 86;
    int v2 = 37;
    int i;
    v1 = v1 + v1;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
