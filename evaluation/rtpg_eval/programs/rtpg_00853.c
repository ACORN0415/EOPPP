int test_func(void) {
    int v0 = 68;
    int v1 = 9;
    int v2 = 34;
    int i;
    v2 = v2 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
