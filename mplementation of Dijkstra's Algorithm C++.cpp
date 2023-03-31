{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyMm/UDJtY2dqaCpEv4LfCWi",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/Dragonwinner/CP_coding/blob/main/mplementation%20of%20Dijkstra's%20Algorithm%20C%2B%2B.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "markdown",
      "source": [
        "Implementation of Dijkstra's Algorithm C++"
      ],
      "metadata": {
        "id": "6sz77VjCL6jy"
      }
    },
    {
      "cell_type": "code",
      "source": [
        "#include<bits/stdc++.h>\n",
        "using namespace std;\n",
        "#define V 4\n",
        "\n",
        "vector<int> djikstra(int graph[V][V], int src){\n",
        "    vector<int>dist(V,INT_MAX);\n",
        "    dist[src]=0;\n",
        "    vector<bool>fin(V,false);\n",
        "    for(int count=0;count<V;count++){\n",
        "        int u=-1;\n",
        "        for(int i=0;i<V;i++){\n",
        "            if(!fin[i]&&(u==-1||dist[i]<dist[u]))\n",
        "              u=i;\n",
        "        }\n",
        "        fin[u]=true;\n",
        "        for(int v=0;v<V;v++){\n",
        "            if(graph[u][v]!=0&& !fin[v])\n",
        "              dist[v]=min(dist[v],dist[u]+graph[u][v]);\n",
        "            \n",
        "        }\n",
        "    }\n",
        "    return dist;\n",
        "}\n",
        "\n",
        "int main() \n",
        "{\n",
        "\tint graph[V][V] = { { 0, 50, 100, 0}, \n",
        "\t\t\t\t\t\t{ 50, 0, 30, 200 }, \n",
        "\t\t\t\t\t\t{ 100, 30, 0, 20 }, \n",
        "\t\t\t\t\t\t{ 0, 200, 20, 0 },}; \n",
        "\n",
        "\tfor(int x: djikstra(graph,0)){\n",
        "\t    cout<<x<<\" \";\n",
        "\t} \n",
        "\n",
        "\treturn 0; \n",
        "} \n"
      ],
      "metadata": {
        "id": "_tW5dBEEMBL4"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}