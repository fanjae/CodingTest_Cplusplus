#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}tree;
tree Node[10005];
int min_low[10005] = { 0 }; // min_low[depth] : 해당 depth의 가장 작은(왼쪽) 좌표
int max_high[10005] = { 0 }; // max_high[depth] : 해당 depth의 가장 작은(오른쪽) 좌표
int order = 1; // 중위 순회 방문 번호 체크. 
int max_depth = 0;
int ans_value = -1; // 정답_너비 
int ans_depth = -1; // 정답_깊이 
void find(int root_value, int depth) // 중위 순회 방문 체크
{
	if (depth > max_depth) // 최대 depth 갱신. 
	{
		max_depth = depth;
	}

	if (Node[root_value].left != NULL) // left가 NULL이 아니라면 왼쪽으로 재귀 탐색.
	{
		find(Node[root_value].left->data, depth + 1);
	}

	if (min_low[depth] == -1 || min_low[depth] > order) // 해당 depth에서 가장 작은 값이 depth의 왼쪽 좌표
	{
		min_low[depth] = order;
	}
	if (max_high[depth] == -1 || max_high[depth] < order) // 해당 depth에서 가장 큰 값이 depth의 오른쪽 좌표
	{
		max_high[depth] = order;
	}
	order++; // 방문 순서를 증가한다. 

	if (Node[root_value].right != NULL) // right가 NULL이 아니라면 오른쪽으로 재귀 탐색.
	{
		find(Node[root_value].right->data, depth + 1);
	}

}
int main(void)
{
	int n, root_value;
	int root_find[10005] = { 0 }; // n번째 값이 입력된 개수가 1회인 경우 해당 node는 반드시 root이다. (왼쪽, 오른쪽에 등장한 경우 1씩 증가)

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int index, index2, index3;
		min_low[i] = -1;
		max_high[i] = -1;

		scanf("%d %d %d", &index, &index2, &index3);

		root_find[index]++; // 첫번째 index가 -1인 경우는 없으므로 if 처리 x. 
		Node[index].data = index;

		if (index2 != -1) { // -1이 아닌 경우 left node가 존재함.
			root_find[index2]++;  // 왼쪽에 등장하였으므로 root_find 1 증가.
			Node[index2].data = index2;  // data는 해당 인덱스와 같게 설정한다.
			Node[index].left = &Node[index2];  // Index의 왼쪽 Node 주소값은 Index2로 설정.
		}
		else if (index2 == -1) { // 왼쪽 노드 없음
			Node[index].left = NULL;
		}

		if (index3 != -1) { // -1이 아닌 경우 right node가 존재함.
			root_find[index3]++; // 오른쪽에 등장하였으므로 root_find 1 증가.
			Node[index3].data = index3; // data는 해당 인덱스와 같게 설정한다.
			Node[index].right = &Node[index3]; // Index의 오른쪽 Node 주소값은 Index3로 설정.
		}
		else if (index3 != -1) { // 오른쪽 노드 없음
			Node[index].right = NULL;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (root_find[i] == 1) { // 이 값이 1인 경우 index를 입력시 맨 왼쪽에서 한 번만 등장하기 때문에 이는 반드시 루트 값이다.
			root_value = i;
			break;
		}
	}

	find(root_value, 1); // 첫번째 루트부터 depth(level)을 1로 지정하고 탐색을 한다.

	for (int i = 1; i <= max_depth; i++) // 최대 depth 까지 탐색한다.
	{
		// 오른쪽 좌표 - 왼쪽 좌표 + 1이 해당 depth의 너비이다.
		// 이 중 가장 큰 값의 depth를 저장한다. (두 개 이상일 땐 가장 작은 번호가 우선이므로 부등호에 같다 제외.  
		if (ans_value == -1 || ans_value < (max_high[i] - min_low[i] + 1)) 
		{
			ans_value = max_high[i] - min_low[i] + 1;
			ans_depth = i;
		}
	}
	printf("%d %d\n", ans_depth, ans_value);
}