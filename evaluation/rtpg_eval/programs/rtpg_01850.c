int test_func(void) {
    int v0 = 33;
    int v1 = 46;
    int v2 = 9;
    int i;
    if (v0 > v0) { v0 = v0; }
    v1 = v1 + v2;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
