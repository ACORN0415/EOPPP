int test_func(void) {
    int v0 = 87;
    int v1 = 48;
    int v2 = 26;
    int i;
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
