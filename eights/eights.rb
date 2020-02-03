def residues
  @residues ||= (
    (1..999).select { |n| n * n * n % 1000 == 888 }
  )
end

def kth_lucky(k)
  k -= 1
  d, r = k.divmod(residues.size)
  1000 * d + residues[r]
end

if $PROGRAM_NAME == __FILE__
  gets.to_i.times do
    k = gets.to_i
    puts kth_lucky(k)
  end
end
