int test_func(void) {
    int v0 = 1;
    int v1 = 47;
    int v2 = 9;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
