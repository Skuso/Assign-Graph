#ifndef NIU_CSCI340_GRAPH_H
#define NIU_CSCI340_GRAPH_H

// This is the file where the student should do their work.

#error "Compilation will fail until this line is removed. Do that."

#include "graph.decl.h"
#include <queue>
#include <stack>
#include <iostream>

size_t Graph::nvertices() const {
  return vertices;
}
size_t Graph::nedges() const { 
  return edges;
}

void Graph::assign(const std::vector<std::string> & vertices, const std::vector<GraphEdge> & edges) {
  this->edges.clear();
  this->vertices.clear();

  this->edges =  edges;
  this->vertices = vertices;
}

bool Graph::edge_exists(size_t origin, size_t destination) const {
  if (origin >= vertices.size() || destination >= vertices.size()) {
    return false;
  }
  for (auto edge : edges) {
    if (edge.origin == origin && edge.destination == destination) {
      return true;
    }
  }
}

double Graph::edge_weight(size_t origin, size_t destination) const {
  if (origin >= vertices.size() || destination >= vertices.size()) {
    return INFINITY;
  }
  for (auto edge : edges) {
    if (edge.origin == origin && edge.destination == destination) {
      return edge.weight;
    }
  }
}

std::vector<AdjListEdge> Graph::undirected_adjacency_list(size_t vertex) const {
  // XXX You must implement this.
  return {};
}

std::vector<AdjListEdge> Graph::in_adjacency_list(size_t vertex) const {
  // XXX You must implement this.
  return {};
}

std::vector<AdjListEdge> Graph::out_adjacency_list(size_t vertex) const {
  // XXX You must implement this.
  return {};
}

std::vector <double> Graph::weighted_adjacency_matrix() const {
  // XXX You must implement this.
  return {};
}

std::vector <bool> Graph::unweighted_adjacency_matrix() const {
  // XXX You must implement this.
  return {};
}

std::string Graph::v_label(size_t vertex) const {
  
}

ssize_t Graph::v_index(const std::string &label) const {
  // XXX You must implement this.
  return -1; }

template <typename FN>
void Graph::breadth_first(size_t start, FN visitfn, bool connected_only) {
  // XXX You must implement this.
}

template <typename FN>
void Graph::depth_first(size_t start, FN visitfn, bool connected_only) {
  // XXX You must implement this.
}

std::vector<size_t> Graph::toposort() const {
  // XXX You must implement this.
  return {};
}
    
std::vector<dijkstra_row> Graph::dijkstra(size_t start) const {
  // XXX You must implement this.
  return {};
}


#endif /* NIU_CSCI340_GRAPH_H */

