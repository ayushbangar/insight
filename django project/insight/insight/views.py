from django.http import HttpResponse
from django.shortcuts import render 
def homepage(request):
    return render(request,"index.html")
def aboutus(request):
    return HttpResponse( " Welcome to insight")
def course(request):
    return HttpResponse( "<b> my name is Gayatri Devi")
def ayush(request,courseid):
    return HttpResponse(courseid)