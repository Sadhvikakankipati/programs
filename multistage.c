#include <stdio.h>
#define INF 999
int main()
{
    int n = 8;  
    int cost[8][8] = {
        {INF,1,2,5,INF,INF,INF,INF},
        {INF,INF,INF,INF,4,11,INF,INF},
        {INF,INF,INF,INF,9,5,16,INF},
        {INF,INF,INF,INF,INF,INF,2,INF},
        {INF,INF,INF,INF,INF,INF,INF,18},
        {INF,INF,INF,INF,INF,INF,INF,13},
        {INF,INF,INF,INF,INF,INF,INF,2},
        {INF,INF,INF,INF,INF,INF,INF,INF}
    };
    int dist[8];
    int i, j;
    dist[n-1] = 0; 
    for(i = n-2; i >= 0; i--)
    {
        dist[i] = INF;
        for(j = i+1; j < n; j++)
        {
            if(cost[i][j] != INF && cost[i][j] + dist[j] < dist[i])
            {
                dist[i] = cost[i][j] + dist[j];
            }
        }
    }
    printf("Minimum cost from source to destination: %d", dist[0]);
    return 0;
}
