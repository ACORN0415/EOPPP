int test_func(void) {
    int v0 = 46;
    int v1 = 85;
    int v2 = 50;
    int i;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
