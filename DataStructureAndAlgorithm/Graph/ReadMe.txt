﻿========================================================================
    控制台应用程序：Graph 项目概述
========================================================================

应用程序向导已为您创建了此 Graph 应用程序。

本文件概要介绍组成 Graph 应用程序的每个文件的内容。


Graph.vcxproj
    这是使用应用程序向导生成的 VC++ 项目的主项目文件，其中包含生成该文件的 Visual C++ 的版本信息，以及有关使用应用程序向导选择的平台、配置和项目功能的信息。

Graph.vcxproj.filters
    这是使用“应用程序向导”生成的 VC++ 项目筛选器文件。它包含有关项目文件与筛选器之间的关联信息。在 IDE 中，通过这种关联，在特定节点下以分组形式显示具有相似扩展名的文件。例如，“.cpp”文件与“源文件”筛选器关联。

Graph.cpp
    这是主应用程序源文件。

/////////////////////////////////////////////////////////////////////////////
其他标准文件:

StdAfx.h, StdAfx.cpp
    这些文件用于生成名为 Graph.pch 的预编译头 (PCH) 文件和名为 StdAfx.obj 的预编译类型文件。

/////////////////////////////////////////////////////////////////////////////
其他注释:

应用程序向导使用“TODO:”注释来指示应添加或自定义的源代码部分。

/////////////////////////////////////////////////////////////////////////////

我们的文件resource1.txt用来存放我们的无向网的特征
source1.txt是我们的无向网的信息
格式：
第一行的意识是   顶点数：弧度数 例如：（6:10)表示有6个顶点，10个弧
第二行的意识是   顶点向量	例如：（v1:v2:v3:v4:v5:v6) 6个顶点
第三行的意识是   我们每条弧的弧尾，弧头,权值 例如：（v1:v2:5 v1:v4:7 .....)

我们的文件resource2.txt用来存放我们的有向图的特征
resource2.txt是我们的有向图的信息
格式：
第一行的意识是   顶点数：弧度数 例如：（6 10)表示有6个顶点，10个弧
第二行的意识是   顶点向量名字	例如：（v1 v2 v3 v4 v5 v6) 6个顶点
第三行的意识是   我们每条弧的弧尾，弧头,权值 例如：（v1:v2 v1:v4 .....)