int test_func(void) {
    int v0 = 94;
    int v1 = 6;
    int v2 = 59;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 * 7;
    return v0;
}
int main(void) { return test_func(); }
