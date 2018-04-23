#pragma once
template <typename Typ>void heap_sort(Typ*t, Typ org, Typ end) {

	make_heap(t, t + end);
	sort_heap(t, t + end);

}