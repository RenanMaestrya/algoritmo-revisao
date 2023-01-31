def merge_sort(array):
  if len(array) <= 1:
    return array
  else:
    mid = len(array) // 2
    left_half = array[:mid]
    right_half = array[mid:]
    left = merge_sort(left_half)
    right = merge_sort(right_half)
    return merge(left, right)

def merge(left, right):
  result = []
  i = j = 0
  while i < len(left) and j < len(right):
    if left[i] < right[j]:
      result.append(left[i])
      i += 1
    else:
      result.append(right[j])
      j += 1
  result += left[i:]
  result += right[j:]
  return result

array = [118, 18, 2, 3, 33, 52, 70, 9, 2, 4, 6, 8, 10]

print(merge_sort(array))

