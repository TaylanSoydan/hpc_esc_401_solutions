FROM ubuntu:trusty

# Install dependencies
RUN apt-get update -q && \
    apt-get install -y make g++
# Copy the file from your host to your current location.
COPY . /poisson

# Compile the code
RUN cd /poisson

# Work from the Output directory
WORKDIR /poisson

# Run the hydro code within the container.
CMD make all
CMD ./main
