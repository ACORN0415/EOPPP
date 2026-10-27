int test_func(void) {
    int v0 = 77;
    int v1 = 29;
    int v2 = 36;
    int v3 = 30;
    int v4 = 34;
    int v5 = 70;
    int i;
    v5 = 83;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
